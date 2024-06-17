from setuptools import setup

package_name = 'sensor_data_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Prajwal M',
    maintainer_email='mnepraj@gmail.com',
    description='Example ROS 2 package for publishing and subscribing to temperature data',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'temperature_publisher = sensor_data_pkg.temperature_publisher:main',
            'temperature_subscriber = sensor_data_pkg.temperature_subscriber:main',
        ],
    },
)

