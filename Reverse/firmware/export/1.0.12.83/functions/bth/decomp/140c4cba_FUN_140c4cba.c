/* FUN_140c4cba @ 0x140c4cba */

void FUN_140c4cba(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_118 [256];
  
  iVar2 = 0;
  puVar1 = auStack_118;
  do {
    *puVar1 = (char)iVar2;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0x100);
  (**(code **)(*param_1 + 0x1c))(param_1,auStack_118,&stack0xffffffe8,(int)param_1 + 0x1d);
  *(undefined1 *)(param_1 + 7) = 1;
  iVar2 = FUN_140db784(auStack_118,(int)param_1 + 0x1d,0x100);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 7) = 2;
  }
  return;
}

