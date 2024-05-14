// Task 1
function compareNumbers(num1, num2) {
    if (num1 < num2) {
        return -1;
    } else if (num1 > num2) {
        return 1;
    } else {
        return 0;
    }
}

// Task 2
function factorial(num) {
    if (num === 0 || num === 1) {
        return 1;
    }
    for (let i = num - 1; i >= 1; i--) {
        num *= i;
    }
    return num;
}

// Task 3
function combineDigits(digit1, digit2, digit3) {
    return Number(`${digit1}${digit2}${digit3}`);
}

// Task 4
function calculateArea(length, width = undefined) {
    if (width === undefined) {
        return length * length; // Square
    } else {
        return length * width; // Rectangle
    }
}

// Task 5
function isPerfectNumber(num) {
    let sum = 0;
    for (let i = 1; i < num; i++) {
        if (num % i === 0) {
            sum += i;
        }
    }
    return sum === num;
}

// Task 6
function findPerfectNumbers(min, max) {
    const perfectNumbers = [];
    for (let i = min; i <= max; i++) {
        if (isPerfectNumber(i)) {
            perfectNumbers.push(i);
        }
    }
    return perfectNumbers;
}

// Task 7
function formatTime(hours, minutes = 0, seconds = 0) {
    const formattedHours = hours < 10 ? `0${hours}` : `${hours}`;
    const formattedMinutes = minutes < 10 ? `0${minutes}` : `${minutes}`;
    const formattedSeconds = seconds < 10 ? `0${seconds}` : `${seconds}`;
    return `${formattedHours}:${formattedMinutes}:${formattedSeconds}`;
}

// Task 8
function timeToSeconds(hours, minutes, seconds) {
    return (hours * 3600) + (minutes * 60) + seconds;
}

// Task 9
function secondsToTime(seconds) {
    const hours = Math.floor(seconds / 3600);
    seconds %= 3600;
    const minutes = Math.floor(seconds / 60);
    const remainingSeconds = seconds % 60;
    return formatTime(hours, minutes, remainingSeconds);
}

// Task 10
function timeDifference(hours1, minutes1, seconds1, hours2, minutes2, seconds2) {
    const time1InSeconds = timeToSeconds(hours1, minutes1, seconds1);
    const time2InSeconds = timeToSeconds(hours2, minutes2, seconds2);
    const differenceInSeconds = Math.abs(time1InSeconds - time2InSeconds);
    return secondsToTime(differenceInSeconds);
}
