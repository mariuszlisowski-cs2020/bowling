<!-- .slide: data-background="#111111" -->

# Testowanie

## Framework `Catch2`

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Przydatne asercje

* <!-- .element: class="fragment fade-in" --> <code>REQUIRE( expression )</code>
* <!-- .element: class="fragment fade-in" --> <code>CHECK( expression )</code>
* <!-- .element: class="fragment fade-in" --> <code>REQUIRE_FALSE( expression )</code>
* <!-- .element: class="fragment fade-in" --> <code>CHECK_FALSE( expression )</code>
* <!-- .element: class="fragment fade-in" --> <code>REQUIRE_NOTHROW( expression )</code>
* <!-- .element: class="fragment fade-in" --> <code>CHECK_NOTHROW( expression )</code>
* <!-- .element: class="fragment fade-in" --> <code>REQUIRE_THROWS_AS( expression, exception type )</code>
* <!-- .element: class="fragment fade-in" --> <code>CHECK_THROWS_AS( expression, exception type )</code>
* <!-- .element: class="fragment fade-in" --> <code>REQUIRE_THAT( lhs, matcher expression )</code>
* <!-- .element: class="fragment fade-in" --> <code>CHECK_THAT( lhs, matcher expression )</code>

___

## Przydatne matchery

* <!-- .element: class="fragment fade-in" --> String matchers
  * <!-- .element: class="fragment fade-in" --> <code>StartsWith</code>
  * <!-- .element: class="fragment fade-in" --> <code>EndsWith</code>
  * <!-- .element: class="fragment fade-in" --> <code>Contains</code>
  * <!-- .element: class="fragment fade-in" --> <code>Equals</code>
  * <!-- .element: class="fragment fade-in" --> <code>Matches</code>
* <!-- .element: class="fragment fade-in" --> Vector matchers
  * <!-- .element: class="fragment fade-in" --> <code>Contains</code> which checks whether a specified vector is present in the result
  * <!-- .element: class="fragment fade-in" --> <code>VectorContains</code> which checks whether a specified element is present in the result
  * <!-- .element: class="fragment fade-in" --> <code>Equals</code> which checks whether the result is exactly equal (order matters) to a specific vector
  * <!-- .element: class="fragment fade-in" --> <code>UnorderedEquals</code> which checks whether the result is equal to a specific vector under a permutation

___

## Zadanie

Przetestuj algorytm `std::sort()`.

W tym zadaniu wa??ne jest pokrycie jak najwi??kszej liczby scenariuszy tego algorytmu.

___

## Organizacja test??w

* <!-- .element: class="fragment fade-in" --> <code>TEST_CASE( test name [, tags ] )</code>
* <!-- .element: class="fragment fade-in" --> <code>SECTION( section name )</code>
* <!-- .element: class="fragment fade-in" --> <code>GIVEN( something )</code>
* <!-- .element: class="fragment fade-in" --> <code>WHEN( something )</code>
* <!-- .element: class="fragment fade-in" --> <code>THEN( something )</code>

___

## Generatory

Dzi??ki generatorom danych jeden scenariusz testowy mo??e zosta?? uruchomiony na r????nych danych testowych.

[Link do dokumentacji](https://github.com/catchorg/Catch2/blob/master/docs/generators.md#top)
