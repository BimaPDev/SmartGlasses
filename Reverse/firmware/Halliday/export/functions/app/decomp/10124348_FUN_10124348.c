/* FUN_10124348 @ 0x10124348 */

byte FUN_10124348(int *param_1,int param_2)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) goto LAB_1012436a;
  param_1 = (int *)**(int **)(param_2 + 4);
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    pcVar1 = (code *)param_1[4];
    if (pcVar1 != (code *)0x0) break;
LAB_1012436a:
    param_1 = (int *)*param_1;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  (*pcVar1)(param_1,param_2);
  return ~*(byte *)(param_2 + 0x18) & 1;
}

