#include <fmt/core.h>
#include <libpsxav.h>
#include <memory>

class AudioFile {
public:
    static std::unique_ptr<AudioFile> make_audio_file();
private:
};

int main(int argc, char *argv[])
{
    fmt::print("Hello World!\n");
    return 0;
}
