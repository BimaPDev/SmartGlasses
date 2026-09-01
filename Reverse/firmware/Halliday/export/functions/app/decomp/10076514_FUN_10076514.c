/* FUN_10076514 @ 0x10076514 */

void FUN_10076514(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar1 = DAT_10076584;
  puVar5 = (uint *)**(undefined4 **)(param_1 + 4);
  uVar4 = puVar5[param_2 + 1];
  if (param_4 == 0) {
    pbVar2 = *(byte **)(param_1 + 0x10);
    uVar3 = *puVar5 & ~(1 << (param_2 + 0xcU & 0xff));
    uVar4 = uVar4 & 0xffff7fff;
    *puVar5 = uVar3;
    if (((uVar3 & 0xf000) == 0) && (-1 < (int)((uint)*pbVar2 << 0x1e))) {
      *DAT_10076584 = *DAT_10076584 & 0xff0fffff;
    }
  }
  else {
    *DAT_10076584 = *DAT_10076584 | 0xc00000;
    if (param_3 == 0) {
      uVar4 = uVar4 & 0xfffdffff;
      *puVar1 = *puVar1 | 0x200000;
    }
    else {
      uVar4 = uVar4 | 0x20000;
      *puVar1 = *puVar1 | 0x100000;
    }
    uVar4 = uVar4 | 0x8000;
  }
  puVar5[param_2 + 1] = uVar4;
  return;
}

