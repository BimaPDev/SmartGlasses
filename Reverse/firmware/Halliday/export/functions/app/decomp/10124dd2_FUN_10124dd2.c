/* FUN_10124dd2 @ 0x10124dd2 */

void FUN_10124dd2(int *param_1)

{
  code *pcVar1;
  
  while( true ) {
    pcVar1 = *(code **)(*param_1 + 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*param_1,param_1);
    }
    if (*(int *)*param_1 == 0) break;
    *param_1 = *(int *)*param_1;
  }
  return;
}

