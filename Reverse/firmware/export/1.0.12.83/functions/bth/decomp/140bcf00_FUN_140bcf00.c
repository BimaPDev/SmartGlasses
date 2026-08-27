/* FUN_140bcf00 @ 0x140bcf00 */

void FUN_140bcf00(int *param_1)

{
  if (*param_1 != 8000) {
    FUN_140a22dc(param_1);
    return;
  }
  FUN_140a22dc(param_1[1]);
  FUN_140bce28(param_1[2]);
  FUN_140bce28(param_1[3]);
  FUN_140a22dc(param_1);
  return;
}

