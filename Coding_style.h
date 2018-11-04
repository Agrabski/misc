#define PREPROCESSOR_DEFINITION

class SomeClass
{
    int _privateField;
    int privateMethod();
  public:
    int publicMethod();
    // NO PUBLIC FIELDS IN NON TRIVIAL CLASSES
};
// use tabs for indentation
enum class SomeEnum {LabelOfEnum};

if(condition && otherCondition)
{
    doStuff();
}
else
{
    dont();
}
// ommiting braces for single instruction loop/if is permited
