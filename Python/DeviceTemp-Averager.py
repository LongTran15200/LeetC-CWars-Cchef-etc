from typing import List, Tuple, Dict

def average_temperature(sensor_data: List[Tuple[int, float]]) -> Dict[int, float]:
    # Step 1: Initialize a dictionary to store sum and count for each device
    device_data = {}

    # Step 2: Process each sensor reading
    for device_id, temperature in sensor_data:
        if device_id not in device_data:
            # If the device isn't in the dictionary, initialize it
            device_data[device_id] = {'sum': 0, 'count': 0}
        
        # Add the temperature to the sum and increment the count
        device_data[device_id]['sum'] += temperature
        device_data[device_id]['count'] += 1

    # Step 3: Calculate the average for each device
    averages = {}
    for device_id, data in device_data.items():
        averages[device_id] = data['sum'] / data['count']  # Calculate the average

    return averages

# Example Input
sensor_data = [
    (1, 22.8),
    (2, 19.0),
    (1, 23.0),
    (2, 20.5),
    (3, 18.0),
]

# Call the function and print the result
result = average_temperature(sensor_data)
print(result)


#ouput
#{1: 22.9, 2: 19.75, 3: 18.0}
