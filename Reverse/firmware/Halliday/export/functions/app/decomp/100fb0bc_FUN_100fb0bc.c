/* FUN_100fb0bc @ 0x100fb0bc */

uint FUN_100fb0bc(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint local_14;
  
  uVar3 = param_1[1];
  iVar2 = param_1[2];
  *param_2 = 0;
  if (uVar3 <= iVar2 + 3U) {
LAB_100fb0f0:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar1 = (uint *)(*param_1 + iVar2);
    uVar3 = 0;
    if (puVar1 == (uint *)0x0) goto LAB_100fb0e8;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&local_14,4);
    if (iVar2 != 4) goto LAB_100fb0f0;
    iVar2 = param_1[2];
    puVar1 = &local_14;
  }
  uVar3 = *puVar1;
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
LAB_100fb0e8:
  param_1[2] = iVar2 + 4;
  return uVar3;
}

