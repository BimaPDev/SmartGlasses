/* FUN_10068b84 @ 0x10068b84 */

int FUN_10068b84(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = DAT_10068bb0;
  puVar2 = (undefined1 *)(param_1 + -1);
  while ((int)(puVar2 + (1 - param_1)) < param_2) {
    if (puVar2[1] == '\n') {
      (*(code *)*puVar1)(0xd);
    }
    puVar2 = puVar2 + 1;
    (*(code *)*puVar1)(*puVar2);
  }
  return param_2;
}

