/* FUN_1007ec9c @ 0x1007ec9c */

undefined4 FUN_1007ec9c(int *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *local_14;
  
  iVar4 = param_1[3];
  local_14 = param_2;
  iVar1 = FUN_1007e8dc(param_1,&local_14,0,param_4,param_1);
  if (iVar1 == 1) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x74) + 0x10);
    *param_2 = *(undefined2 *)(iVar1 + (int)local_14 * 2);
    *(undefined2 *)(iVar1 + (int)local_14 * 2) = 0xffff;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(char *)(*param_1 + 0x10) != '\0') {
      pcVar3 = *(code **)(*param_1 + 0xc);
      if (pcVar3 == (code *)0x0) {
        uVar2 = 0;
      }
      else {
        (*pcVar3)(DAT_1007ece8,DAT_1007ece4,0x8c);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

