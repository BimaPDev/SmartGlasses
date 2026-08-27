/* FUN_2c0119c4 @ 0x2c0119c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0119c4(uint param_1,int param_2,uint *param_3,char *param_4)

{
  undefined1 uVar1;
  int extraout_r1;
  ushort uVar2;
  undefined4 uVar4;
  ushort uVar5;
  ushort uStack_1e;
  uint uStack_1c;
  int iVar3;
  
  uStack_1c = *param_3;
  if (*param_4 == '\x02') {
    if ((param_1 - 0x53 & 0xff) < 0x3c) {
      if (param_1 < 0x5b) {
        uVar4 = 0x12a;
        iVar3 = 1 << (param_1 - 0x53 & 0xff);
        uVar2 = (ushort)iVar3;
        uVar5 = (ushort)(iVar3 << 8);
      }
      else if (param_1 < 99) {
        uVar4 = 0x12f;
        iVar3 = 1 << (param_1 - 0x5b & 0xff);
        uVar2 = (ushort)iVar3;
        uVar5 = (ushort)(iVar3 << 8);
      }
      else if (param_1 < 0x6b) {
        uVar4 = 0x132;
        iVar3 = 1 << (param_1 - 99 & 0xff);
        uVar2 = (ushort)iVar3;
        uVar5 = (ushort)(iVar3 << 8);
      }
      else if (param_1 < 0x73) {
        uVar4 = 0x136;
        iVar3 = 1 << (param_1 - 0x6b & 0xff);
        uVar2 = (ushort)iVar3;
        uVar5 = (ushort)(iVar3 << 8);
      }
      else if (param_1 < 0x7b) {
        uVar4 = 0x139;
        iVar3 = 1 << (param_1 - 0x73 & 0xff);
        uVar2 = (ushort)iVar3;
        uVar5 = (ushort)(iVar3 << 8);
      }
      else if (param_1 < 0x83) {
        uVar4 = 0x13d;
        iVar3 = 1 << (param_1 - 0x7b & 0xff);
        uVar2 = (ushort)iVar3;
        uVar5 = (ushort)(iVar3 << 8);
      }
      else if (param_1 < 0x8b) {
        uVar4 = 0x140;
        iVar3 = 1 << (param_1 - 0x83 & 0xff);
        uVar2 = (ushort)iVar3;
        uVar5 = (ushort)(iVar3 << 8);
      }
      else {
        uVar4 = 0x144;
        iVar3 = 1 << (param_1 - 0x8b & 0xff);
        uVar2 = (ushort)(iVar3 << 8);
        uVar5 = (ushort)(iVar3 << 0xc);
      }
      FUN_2c008e4c(uVar4,&uStack_1e);
      uStack_1e = uStack_1e & ~(uVar2 | uVar5);
      if (param_2 == 2) {
        uStack_1e = uStack_1e | uVar2;
      }
      else if (param_2 == 1) {
        uStack_1e = uStack_1e | uVar5;
      }
      FUN_2c008f74(uVar4);
      uVar1 = 0;
      param_2 = extraout_r1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  if ((*_DAT_2c011acc ^ uStack_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8(uVar1,param_2,*_DAT_2c011acc ^ uStack_1c,0);
  }
  return;
}

