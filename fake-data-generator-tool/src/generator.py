"""Core data generation module."""

from faker import Faker
from typing import List, Dict

fake = Faker()


def generate_record() -> Dict[str, str]:
    """Generate a single fake data record."""
    return {
        "name": fake.name(),
        "email": fake.email(),
        "address": fake.address().replace("\n", ", "),
        "phone": fake.phone_number(),
    }


def generate_records(count: int = 5) -> List[Dict[str, str]]:
    """Generate multiple fake data records."""
    return [generate_record() for _ in range(count)]