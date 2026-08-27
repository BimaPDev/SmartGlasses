/* FUN_140ae7e4 @ 0x140ae7e4 */

uint * FUN_140ae7e4(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int unaff_r7;
  undefined8 extraout_d7;
  
  if (((uint)param_2 & 3) != 0) {
    FUN_140dbf70(uRam140ae854,4,param_3,param_4,param_4);
    return (uint *)0x0;
  }
  uVar4 = param_3 - 8U & 0xfffffffc;
  if (uRam140ae84c < uVar4 - 0xc) {
    FUN_140dbf70(uRam140ae850,0x14,0x80008,uRam140ae84c,param_4);
    return (uint *)0x0;
  }
  uVar6 = *param_2;
  uVar4 = uVar4 | 1;
  *param_2 = uVar4;
  FUN_140ae420(param_1,param_2 + -1,uVar4,uVar6);
  puVar7 = (undefined4 *)((int)param_2 + (*param_2 & 0xfffffffc) + 4);
  if ((*param_2 & 0xfffffffc) != 0) {
    puVar7[-1] = param_2 + -1;
    *puVar7 = 2;
    return param_2;
  }
  iVar1 = FUN_140ae4dc();
  vrev(extraout_d7,2);
  puVar2 = (uint *)(int)*(char *)(unaff_r7 + iVar1);
  if (((uint)puVar2 & 3) == 0) {
    puVar2[2] = (uint)puVar2;
    puVar2[3] = (uint)puVar2;
    puVar5 = puVar2 + 0x31;
    puVar3 = puVar2 + 4;
    *puVar3 = 0;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      puVar8 = puVar5 + -0x20;
      do {
        puVar8 = puVar8 + 1;
        *puVar8 = (uint)puVar2;
      } while (puVar8 != puVar5);
      puVar5 = puVar5 + 0x20;
    } while (puVar3 != puVar2 + 0x11);
    return puVar2;
  }
  FUN_140dbf70(DAT_140ae898,4);
  return (uint *)0x0;
}

