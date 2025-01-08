#include <iostream>
#include <list>
#include <string>
using namespace std;

/*Operator functions; tell the compiler what to do when called on user-defined data types
Structures; are public by default
Classes; are private by default.
*/

struct YTChannel
{
    string Name;
    int SubsciberCount;

    YTChannel(string name, int subscribers) {
        Name = name;
        SubsciberCount = subscribers;
    }

    bool operator==(const YTChannel& channel) {
        return this->Name  == channel.Name;
    }
};

struct MyCollection{
    list<YTChannel> myChannels;

    void operator+=(YTChannel& channel) {
        this->myChannels.push_back(channel);
    }

    void operator-=(YTChannel& channel) {
        this->myChannels.remove(channel);
    }
};

// operator function; pass attr by reference
ostream& operator<<(ostream& COUT, YTChannel& myChannel) {
    COUT << "Name : " << myChannel.Name << endl;
    COUT << "Subscribers : " << myChannel.SubsciberCount << endl;
    return COUT;
}

ostream& operator<<(ostream& COUT, MyCollection& listOfChannels) {
    // printing an entire list of channels
    for(YTChannel ytchannel : listOfChannels.myChannels)
        COUT << ytchannel << endl;
    return COUT;
}


int main() {
    YTChannel yt1 = YTChannel("KK", 23);
    YTChannel yt2 = YTChannel("HJH", 2000);

    // cout << yt1 << yt2;
    // operator<<(cout, yt1);

    MyCollection listOfChannels;
    listOfChannels += yt1;
    listOfChannels += yt2;
    listOfChannels -= yt2;
    cout << listOfChannels;

}