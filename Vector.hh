<?hh

namespace Hack\UserDocumentation\Collections\Examples\Examples\Vec;

function use_vector(): void {
  $fruit_basket = Vector {'Banana', 'Apple'}; 
  $fruit_basket[] = 'Orange'; 
  $fruit_basket[] = 'Banana'; 
  var_dump($fruit_basket);
  try {
    $fruit_basket[4] = 'Plum';
  } catch (\OutOfBoundsException $ex) {
    var_dump($ex->getMessage());
  }
  var_dump($fruit_basket[1]);
  foreach ($fruit_basket as $fruit) {
    var_dump($fruit);
  }
  for ($i = 0; $i < $fruit_basket->count() - 2; $i++) {
    if ($i % 2 === 0) {
      $fruit_basket[$i] = 'Grape';
    }
  }
  var_dump($fruit_basket);
  $fruit_basket->removeKey(0);
  var_dump($fruit_basket);
}

use_vector();
