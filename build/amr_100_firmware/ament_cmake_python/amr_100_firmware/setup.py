from setuptools import find_packages
from setuptools import setup

setup(
    name='amr_100_firmware',
    version='0.0.0',
    packages=find_packages(
        include=('amr_100_firmware', 'amr_100_firmware.*')),
)
