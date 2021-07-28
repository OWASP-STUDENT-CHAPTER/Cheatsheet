import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

void main() => runApp(MaterialApp (
  home: Home(),
));

class Home extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('My First App'),
        centerTitle: true,
        backgroundColor: Colors.red[600],
      ),
      //body: Center(
        /*child: Text(
          'Hello World',
          style: TextStyle(
            fontSize: 20.0,
            fontWeight: FontWeight.bold,
            letterSpacing: 2.0,
            color: Colors.grey[600],
            fontFamily: 'Poppins-Italic',*/

        /*child: Image.network('https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTuHDQOsMxF5mAXIDBiZAMF2i60X_YLL7IH4g&usqp=CAU'),*/

        /*child: Image.asset('assets/LIFE SUPPORT.png'),*/

        /*child: Icon(
          Icons.airport_shuttle,
          color: Colors.lightBlue,
          size: 50.0,
        ),*/

        /*child: ElevatedButton(
          onPressed: () {
            print('You clicked me');
          },
          child: Text('Click me'),
          style: ElevatedButton.styleFrom(
              primary: Colors.lightBlue,
          ),
        ),*/

        /*child: ElevatedButton.icon(
          onPressed: () {},
          icon: Icon(
            Icons.mail
          ),
          label: Text('Mail me'),
          style: ElevatedButton.styleFrom(
            primary: Colors.amber,
          ),
        ),*/

        /*child: IconButton(
          onPressed: () {},
          icon: Icon(Icons.alternate_email),
          color: Colors.amber,
        ),*/

        //),

      /*body: Container(
        padding: EdgeInsets.fromLTRB(10.0, 20.0, 30.0, 40.0),
        margin: EdgeInsets.all(30.0),
        color: Colors.grey[400],
        child: Text('Hello'),
      ),*/

      /*body: Padding( //does not allow to apply color and margin as we can do in Container widget
        padding: EdgeInsets.all(30.0),
        child: Text('Hello'),
      ),*/

      /*body: Row(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          Text('Hello World'),
          TextButton(
            onPressed: () {},
            style: TextButton.styleFrom(primary: Colors.amber),
            child: Text('Click me'),
          ),
          Container(
            color: Colors.cyan,
            padding: EdgeInsets.all(30.0),
            child: Text('Inside Container'),
          )
        ],
      ),*/

      /*body: Column(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        crossAxisAlignment: CrossAxisAlignment.stretch,
        children: [
          Container(
            padding: EdgeInsets.all(20.0),
            color: Colors.cyan,
            child: Text('One'),
          ),
          Container(
            padding: EdgeInsets.all(30.0),
            color: Colors.pinkAccent,
            child: Text('Two'),
          ),
          Container(
            padding: EdgeInsets.all(40.0),
            color: Colors.amber,
            child: Text('Three'),
          )
        ],
      ),*/

      body: Row(
        children: [
          Expanded(
              child: Image.asset('LIFE SUPPORT.png'),
            flex: 3
          ),
          Expanded(
            flex: 3,
            child: Container(
              padding: EdgeInsets.all(30.0),
              color: Colors.cyan,
              child: Text('1'),
            ),
          ),
          Expanded(
            flex: 2,
            child: Container(
              padding: EdgeInsets.all(30.0),
              color: Colors.pinkAccent,
              child: Text('2'),
            ),
          ),
          Expanded(
            flex: 1,
            child: Container(
              padding: EdgeInsets.all(30.0),
              color: Colors.amber,
              child: Text('3'),
            ),
          )
        ],
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {},
        child: Text('Click'),
        backgroundColor: Colors.red[600],
      ),
    );
  }
}
