#include <iostream>
#include <vector>
using namespace std;

struct Education {
    string degree;
    string institution;
    string year;
};

struct Experience {
    string title;
    string company;
    string duration;
};

int main() {
    string name, email, phone;
    int n;

    cout << "Enter your full name: ";
    getline(cin, name);
    
    cout << "Enter your email: ";
    getline(cin, email);
    
    cout << "Enter your phone number: ";
    getline(cin, phone);

    // Education
    cout << "\nHow many educational qualifications do you want to enter? ";
    cin >> n;
    cin.ignore(); // clear newline
    vector<Education> educations(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter degree #" << i + 1 << ": ";
        getline(cin, educations[i].degree);
        cout << "Enter institution: ";
        getline(cin, educations[i].institution);
        cout << "Enter year: ";
        getline(cin, educations[i].year);
    }

    // Work Experience
    cout << "\nHow many work experiences do you want to enter? ";
    cin >> n;
    cin.ignore();
    vector<Experience> experiences(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter job title #" << i + 1 << ": ";
        getline(cin, experiences[i].title);
        cout << "Enter company: ";
        getline(cin, experiences[i].company);
        cout << "Enter duration: ";
        getline(cin, experiences[i].duration);
    }

    // Skills
    cout << "\nHow many skills do you want to enter? ";
    cin >> n;
    cin.ignore();
    vector<string> skills(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter skill #" << i + 1 << ": ";
        getline(cin, skills[i]);
    }

    // Display Resume
    cout << "\n================== RESUME ==================\n";
    cout << "Name: " << name << "\n";
    cout << "Email: " << email << "\n";
    cout << "Phone: " << phone << "\n";

    cout << "\n--- Education ---\n";
    for (const auto& edu : educations) {
        cout << edu.degree << ", " << edu.institution << " (" << edu.year << ")\n";
    }

    cout << "\n--- Work Experience ---\n";
    for (const auto& exp : experiences) {
        cout << exp.title << " at " << exp.company << " (" << exp.duration << ")\n";
    }

    cout << "\n--- Skills ---\n";
    for (const auto& skill : skills) {
        cout << "- " << skill << "\n";
    }

    cout << "============================================\n";

    return 0;
}

