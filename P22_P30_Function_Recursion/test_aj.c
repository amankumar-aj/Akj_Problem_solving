<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Catalogue</title>
    <style>
        body {
            margin: 0px;
            padding: 0px;
            box-sizing: border-box;
        }
        table{ margin-top:20px ;}

        table td {
            border: 1px solid #CCC;
            text-align: center;
            padding: 10px;
        }

        table td img {
            width: 100px;
        }

        button {
            background-color: rgb(217, 187, 17);
            border-radius: 10px;
            padding: 5px 20px;
        }
    </style>
</head>

<body>
    <table width="60%" align="center" cellspacing="0">
        <tr>
            <td>
                <img src="./images/java2_book.jpg" alt="Java" />
            </td>
            <td>
                <ul type="none">
                    <li>Book: Java</li>
                    <li>Author: Winston</li>
                    <li>Publication: Perl</li>
                </ul>
            </td>
            <td>
                <b>&dollar; 40.5</b>
            </td>
            <td>
                <button>Add to Card</button>
            </td>
        </tr>

        <tr>
            <td>
                <img src="./images/dotnet_book.jpg" alt="dot net" />
            </td>
            <td>
                <ul type="none">
                    <li>Book: Dot Net</li>
                    <li>Author: S.Russel</li>
                    <li>Publication: Perl</li>
                </ul>
            </td>
            <td>
                <b>&dollar; 63</b>
            </td>
            <td>
                <button>Add to Card</button>
            </td>
        </tr>


        <tr>
            <td>
                <img src="./images/ds_book.jpg" alt="Data Structure" />
            </td>
            <td>
                <ul type="none">
                    <li>Book: Data Structure</li>
                    <li>Author: Watson</li>
                    <li>Publication: PrincetoHall</li>
                </ul>
            </td>
            <td>
                <b>&dollar; 35.5</b>
            </td>
            <td>
                <button>Add to Card</button>
            </td>
        </tr>


        <tr>
            <td>
                <img src="./images/html_book.jpg" alt="HTML" />
            </td>
            <td>
                <ul type="none">
                    <li>Book: HTML</li>
                    <li>Author: Jennifer Krynin</li>
                    <li>Publication: Pearson</li>
                </ul>
            </td>
            <td>
                <b>&dollar; 40.5</b>
            </td>
            <td>
                <button>Add to Card</button>
            </td>
        </tr>

    </table>
</body>

</html>