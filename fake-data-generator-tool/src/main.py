"""Main entry point for the fake data generator."""

import sys
from generator import generate_records
from formatter import format_csv, format_json


def main():
    records_count = 5
    output_format = "csv"

    if "--records" in sys.argv:
        idx = sys.argv.index("--records")
        try:
            records_count = int(sys.argv[idx + 1])
        except (IndexError, ValueError):
            print("Error: --records requires a number.")
            sys.exit(1)

    if "--format" in sys.argv:
        idx = sys.argv.index("--format")
        try:
            output_format = sys.argv[idx + 1]
        except IndexError:
            print("Error: --format requires csv or json.")
            sys.exit(1)

    records = generate_records(records_count)

    if output_format == "csv":
        print(format_csv(records))
    elif output_format == "json":
        print(format_json(records))
    else:
        print(f"Unsupported format: {output_format}")
        sys.exit(1)


if __name__ == "__main__":
    main()