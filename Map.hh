<?hh

namespace Hack\UserDocumentation\Collections\Examples\Examples\UsingMap;

function use_map(): void {
  $users = Map {1 => 'Joel', 2 => 'Fred'}; 
  try {
    $users[] = 'Matthew'; 
  } catch (\InvalidArgumentException $ex) {
    var_dump($ex->getMessage());
  }
  $users[3] = 'Matthew';
  $users[] = Pair {4, 'Rex'};
  var_dump($users);
  var_dump($users[1]);
  foreach ($users as $id=>$name) {
    echo 'The user name at id: ' . strval($id) . ' is ' . $name . PHP_EOL;
  }
  $users->removeKey(2);
  var_dump($users);
}

use_map();