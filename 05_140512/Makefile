test-rat: test-rat.cpp
	g++ -o $@ $<
test-student1: test-student1.cpp student1.cpp
	g++ -o $@ $^
test-student4: test-student4.cpp
	g++ -o $@ $<

clean:
	rm -rf test-rat test-student1 test-student4 test-template
