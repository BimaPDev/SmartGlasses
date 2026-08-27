/* FUN_14044644 @ 0x14044644 */

void FUN_14044644(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  
  iVar1 = DAT_140446b0;
  FUN_1402a6e8(4,0x128,DAT_140446b4,DAT_140446c0,DAT_140446bc,DAT_140446b8,
               *(undefined1 *)(DAT_140446b0 + 1),2,param_1);
  uVar5 = 0;
  *(char *)(iVar1 + 2) = (char)param_1;
  *(undefined1 *)(iVar1 + 1) = 2;
  uVar2 = DAT_140446c4;
  pbVar3 = (byte *)(*(int *)(iVar1 + 0xe3e) + 0xc);
  do {
    if (param_1 == *pbVar3) {
      bVar4 = (byte)(1 << (uVar5 & 0xff));
      goto LAB_1404468a;
    }
    uVar5 = uVar5 + 1;
    pbVar3 = pbVar3 + 1;
  } while (uVar5 != 4);
  bVar4 = 0x10;
LAB_1404468a:
  *(byte *)(iVar1 + 0xc5d) = bVar4 | *(byte *)(iVar1 + 0xc5d);
  FUN_14048958(param_1,param_2,uVar2);
  return;
}

