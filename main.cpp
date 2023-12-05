#include <iostream>
#include <string>
#include <vector>

// 1. Good CTR
// 2. Good retention
// 3. Good watch time

class Video {
  public:
    Video(std::string title, double retention, double watch_time) {
        title_ = title;
        retention_ = retention;
        watch_time_ = watch_time;
    }
    
    std::string Title() { return title_; }
    
    double Average() {
        return (retention_ + watch_time_) / 2;
    }
  
  private:
    std::string title_;
    double retention_;
    double watch_time_;
};

int main() {
    Video video1("I Went To The Moon", 90.42, 1420.23);
    Video video2("C++ Tutorial", 20.23, 180.23);
    Video video3("10000 Mile Road Trip", 60.92, 1243.75);
    Video video4("A Day In My Life", 24.03, 124.83);
    Video video5("Minecraft Let's Play - Episode 1", 25.93, 223.94);
    
    std::vector<Video> videos;
    
    videos.push_back(video1);
    videos.push_back(video2);
    videos.push_back(video3);
    videos.push_back(video4);
    videos.push_back(video5);
    
    double max_average = 0;
    std::string most_watched_video = "";

    for (auto video : videos) {
        if (video.Average() > max_average) {
            max_average = video.Average();
            most_watched_video = video.Title();
        }
    }
    
    std::cout << most_watched_video;
    
    return 0;
}
