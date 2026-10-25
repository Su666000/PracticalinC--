#include  <iostream>
#include  <string>

class VideoMat{
    protected:
        std::string title;
        double rentalPrice;
        bool isAvailable;

public:
    VideoMat(std::string title, double rentalPrice){
        this->title = title;
        this->rentalPrice = rentalPrice;
        this->isAvailable = true;
    }
    
    void returntem(){
        isAvailable = true;
        cout << title << " has been returned." << endl;
    }
    virtual void checkOut(){
        if(isAvailable){
            isAvailable = false;
            cout << title << " has been checked out." << endl;
        } else {
            cout << title << " is not available for checkout." << endl;
        }
    }

    virtual void privatInfo(){
        class Movie : public VideoMat{
            private:
                std::string director;
                int releaseYear;
            public:
                Movie(std::string title, double rentalPrice, std::string director, int releaseYear)
                    : VideoMat(title, rentalPrice), director(director), releaseYear(releaseYear) {}
                
                void privatInfo() override {
                    std::cout << "Movie Title: " << title << std::endl;
                    std::cout << "Rental Price: $" << rentalPrice << std::endl;
                    std::cout << "Director: " << director << std::endl;
                    std::cout << "Release Year: " << releaseYear << std::endl;
                }
        };
    class SprcialEditionMovie(string title, double rentalPrice, std::string director, int releaseYear, std::string specialFeature)
                    : Movie(title, rentalPrice, director, releaseYear), specialFeature(specialFeature) {}
                this-> bonusMinutes = bonusMinutes;
                }
                void privatInfo() override {
                    Movie::privatInfo();
                    std::cout << "Special Feature: " << specialFeature << std::endl;
                    std::cout << "Bonus Minutes: " << bonusMinutes << std::endl;
                }
        };

        class RentalStore{
            private:
                videoMat* catalog[5];
                int totalVideos;
            public:
            RntalStore(){
                totalVideos = 0;    
            }
                void addVideo(VideoMat* video){
                    if(totalVideos < 5){
                        catalog[totalVideos] = video;
                        totalVideos++;
                    } else {
                        std::cout << "Catalog is full. Cannot add more videos." << std::endl;
                    }
                }
                void printCatalog(){
                    std::cout << "Video Catalog:" << std::endl;
                    for(int i = 0; i < totalVideos; i++){
                        catalog[i]->privatInfo();
                        std::cout << std::endl;
                    }
                }
        };

        int main(){
            setlocale(LC_ALL, "en_US.UTF-8");

            VideoMat* movie1 = new Movie("Inception", 3.99, "Christopher Nolan", 2010);
            VideoMat* movie2 = new SprcialEditionMovie("The Matrix", 4.99, "The Wachowskis", 1999, "Behind the Scenes", 15);
            RentalStore store;
            store.addVideo(movie1);
            store.addVideo(movie2); 

            store.printCatalog();

            VideoMat* classicMovie = new Movie("Casablanca", 2.99, "Michael Curtiz", 1942);
            VideoMat* genericVideo = new VideoMat("Generic Video", 1.99);

            classicMovie->rentOut();
            classicMovie->returnVideo();

            std::cout << "Checking out" << std::endl;
            genericVideo->checkQuantity();
            classicMovie->checkQuantity();
            premiumMovie->checkQuantity();
            return 0;
        }