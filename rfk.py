nilai_ujian = 85

match True:
    case _ if nilai_ujian >= 90:
        print("Nilai A")

    case _ if nilai_ujian >= 80:
        print("Nilai B")

    case _ if nilai_ujian >= 70:
        print("Nilai C")

    case _:
        print("Nilai D")
