from setuptools import setup

package_name = 'calculator_client'

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
    description='Calculator service client',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'calculator_client = calculator_client.calculator_client:main',
        ],
    },
)

