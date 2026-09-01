/* FUN_1007f98c @ 0x1007f98c */

undefined4 FUN_1007f98c(int *param_1,uint param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  code *pcVar3;
  
  pbVar2 = *(byte **)(param_1[3] + 0x74);
  if (*(uint *)((uint)*pbVar2 * 0x1c + param_1[3] + 0x34) < param_2) {
    if ((*(char *)(*param_1 + 0x10) != '\0') &&
       (pcVar3 = *(code **)(*param_1 + 0xc), pcVar3 != (code *)0x0)) {
      (*pcVar3)(DAT_1007f9cc,DAT_1007f9c8,0x193,param_2);
    }
    uVar1 = 0x2000;
  }
  else {
    uVar1 = 1;
    *param_3 = *(undefined2 *)(*(int *)(pbVar2 + 8) + param_2 * 2);
  }
  return uVar1;
}

