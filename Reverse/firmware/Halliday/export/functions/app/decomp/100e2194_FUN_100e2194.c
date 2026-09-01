/* FUN_100e2194 @ 0x100e2194 */

undefined4 FUN_100e2194(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  
  if (param_3 != 0) {
    if (*(short *)(param_2 + 0x46) != 0) {
      return 0xffffffef;
    }
    if (((param_3 & 0x101) == 1) && (*(byte *)(param_2 + 0x49) < 5)) {
      if ((*(byte *)(param_2 + 0x49) == 0) && (param_3 != 1)) {
        *(undefined1 *)(param_2 + 0x49) = 1;
      }
      if (*(char *)(param_2 + 0x44) != '\0') {
        if (*(char *)(param_2 + 0x44) == '\x03') {
          return 0xffffff81;
        }
        return 0xfffffff0;
      }
      iVar3 = FUN_100e15d8(param_1,param_2,DAT_100e22ac,1,param_4);
      if (iVar3 == 0) {
        return 0xfffffff4;
      }
      FUN_100a5b78((DAT_100e22b4 - DAT_100e22b0) * 0x20 & 0xff00U | 0x5280032,DAT_100e22b8,param_3,
                   *(undefined2 *)(param_2 + 0x50));
      *(short *)(param_2 + 0x46) = (short)param_3;
      FUN_10133f98(param_2,1);
      FUN_10138130(param_2 + 0x58,3);
      iVar3 = FUN_10138170(param_2);
      if (iVar3 != 0) {
        if (iVar3 == 2) {
          FUN_10138130(param_2 + 0x58,7);
          return 0;
        }
        FUN_1013811a(param_2);
        return 0xfffffffb;
      }
      iVar3 = FUN_1013401c(DAT_100e22bc,0,0xffffffff,0xffffffff);
      puVar4 = (undefined1 *)FUN_100c1fe4(iVar3 + 8,4);
      *puVar4 = 2;
      uVar2 = FUN_100e13b8();
      puVar4[1] = uVar2;
      puVar4[2] = 4;
      puVar4[3] = 0;
      puVar5 = (undefined2 *)FUN_100c1fe4(iVar3 + 8);
      uVar1 = *(undefined2 *)(param_2 + 0x50);
      *puVar5 = (short)param_3;
      puVar5[1] = uVar1;
      FUN_10138156(param_2,iVar3,40000,0);
      return 0;
    }
  }
  return 0xffffffea;
}

