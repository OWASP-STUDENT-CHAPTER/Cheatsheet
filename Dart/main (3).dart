import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'quotes.dart';
import 'quote_card.dart';

void main() => runApp(MaterialApp(
  home: QuotesList(),
));

class QuotesList extends StatefulWidget {
  @override
  _QuotesListState createState() => _QuotesListState();
}

class _QuotesListState extends State<QuotesList> {
  @override
  Widget build(BuildContext context) {

    List<Quote> quotes = [
      Quote(author: 'Oscar Wilde', text: 'Be yourself; everyone else is already taken'),
      Quote(author: 'Oscar Wilde', text: 'I have nothing to declare except my genius'),
      Quote(author: 'Oscar Wilde', text: 'The truth is rarely pure and never simple'),
      Quote(author: 'Oscar Wilde', text: 'The truth is rarely pure and never simple')
    ];

    return Scaffold(
      backgroundColor: Colors.grey[200],
      appBar: AppBar(
        title: Text('Awesome Quotes'),
        centerTitle: true,
        backgroundColor: Colors.redAccent,
      ),
      body: Column(
        children: quotes.map((quote) => QuoteCard(
          quote: quote,
          delete: () {
              setState(() {
                quotes.remove(quote);
              });
          }
        )).toList(),
      )
    );
  }
}

