class queryError(Exception):
    pass


if __name__ == "__main__":

    query = input("what? ")

    while True:

        try:
            if(query.count("'") > 0):
                raise queryError
            else:
                print(f"this is valid input: {query}")
                break

        except queryError:
            errorLocation = query.find("'") # starts at 0
            errorCarats = "^" * len(query)
            print(f'''{input}\n
                      {errorCarats}
                    ''')

            query = input("what part 2? ")
            pass
