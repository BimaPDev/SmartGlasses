/* FUN_10076680 @ 0x10076680 */

void FUN_10076680(byte *param_1,int param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte local_1c;
  byte local_1b;
  undefined1 local_1a;
  byte local_19 [5];
  
  if (param_2 == 0x10) {
    iVar3 = 0;
  }
  else if (param_2 == 0x16) {
    iVar3 = 1;
  }
  else if (param_2 == 0x18) {
    iVar3 = 2;
  }
  else if (param_2 == 0x20) {
    iVar3 = 3;
  }
  else if (param_2 == 0x2c) {
    iVar3 = 4;
  }
  else {
    if (param_2 != 0x30) {
      uVar5 = 0;
      uVar2 = 0x100;
      uVar4 = uVar5;
      goto LAB_100766b0;
    }
    iVar3 = 5;
  }
  iVar3 = iVar3 * 6 + DAT_10076734;
  uVar2 = *(undefined2 *)(iVar3 + 2);
  uVar5 = (uint)*(byte *)(iVar3 + 5);
  uVar4 = (uint)*(byte *)(iVar3 + 4);
LAB_100766b0:
  iVar3 = FUN_100776ac(param_2,uVar2,&local_1c,&local_1b,&local_1a);
  if ((iVar3 == 0) && (iVar3 = FUN_10077c28(local_1a,local_19), puVar1 = DAT_10076738, iVar3 == 0))
  {
    uVar4 = *DAT_10076738 & 0xffffce00 |
            (local_19[0] & 1) << 8 | (uint)local_1b | (uint)local_1c << 4 | uVar4 << 0xc;
    if (uVar5 == 0) {
      uVar4 = uVar4 & 0xffff7fff;
    }
    else {
      uVar4 = uVar4 | 0x8000;
    }
    *param_1 = *param_1 & 0xfb | (byte)((local_19[0] & 1) << 2);
    *puVar1 = uVar4;
  }
  return;
}

