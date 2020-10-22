#include "printer.hpp"

void Printer::print(std::vector<LaneStruct> & lanes, std::ostream & outputStream) {
    for (auto & lane : lanes) {
        printHeader(lane);
        printPlayers(lane);
    }
    outputStream << stream_.str();
}

void Printer::printHeader(LaneStruct& lane) {
    stream_ << "### " << lane.name << ": " << parseStatus(lane.status) << " ###\n";
}

std::string Printer::parseStatus(const Status & status) {
    switch (status) {
    case Status::NO_GAME:
        return "no game";

    case Status::IN_PROGRESS:
        return "game in progress";

    case Status::FINISHED:
        return "game finished";

    default:
        return "";
    }
}

void Printer::printPlayers(LaneStruct& lane) {
    for (auto& player : lane.players) {
        printPlayer(player);
        stream_ << "\n";
    }
}

void Printer::printPlayer(Player& player) {
    if (!player.name.empty()) {
        stream_ << player.name << " ";
    }
    stream_ << player.score;
}
