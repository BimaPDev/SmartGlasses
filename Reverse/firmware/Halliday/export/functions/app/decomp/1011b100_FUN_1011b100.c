/* FUN_1011b100 @ 0x1011b100 */

undefined4 FUN_1011b100(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)**(undefined4 **)(param_1 + 4);
  FUN_1011b0a8(iVar2);
  pcVar1 = *(code **)(*(int *)(iVar2 + 8) + 0x2c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  return 0;
}

