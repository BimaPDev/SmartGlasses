/* FUN_1405d6d0 @ 0x1405d6d0 */

undefined4
FUN_1405d6d0(undefined1 param_1,undefined1 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = DAT_1405d79c;
  if (((param_6 == (int *)0x0) || (*param_6 == 0)) || (param_6[1] == 0)) {
    return 0x4d;
  }
  uVar5 = *(uint *)(DAT_1405d79c + 0xa0);
  uVar6 = ~uVar5 & 0x7ff;
  if (uVar6 != 0) {
    if (param_4 < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1405d798,0x122,DAT_1405d794);
    }
    puVar4 = (undefined4 *)FUN_14073fdc(param_4,0);
    if (puVar4 != (undefined4 *)0x0) {
      bVar1 = (byte)uVar6;
      bVar2 = (byte)((~uVar5 << 0x15) >> 0x18);
      iVar7 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) <<
                      0x18 | (uint)(byte)((((bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                          bVar2 >> 7) << 5) << 0x10);
      FUN_140e5658(puVar4,0,param_4);
      puVar4[1] = param_6;
      *puVar4 = param_5;
      *(undefined1 *)((int)puVar4 + 0xd) = param_1;
      *(undefined1 *)((int)puVar4 + 0xe) = param_2;
      puVar4[2] = param_3;
      *(char *)(puVar4 + 3) = (char)iVar7;
      *(undefined1 *)((int)puVar4 + 0xf) = 0;
      uVar5 = *(uint *)(iVar3 + 0xa0);
      *(undefined4 **)(iVar3 + (iVar7 + 0x1a) * 4) = puVar4;
      *(uint *)(iVar3 + 0xa0) = uVar5 | 1 << iVar7;
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_1405d790,DAT_1405d78c,iVar7,puVar4);
    }
  }
  return 0x4b;
}

