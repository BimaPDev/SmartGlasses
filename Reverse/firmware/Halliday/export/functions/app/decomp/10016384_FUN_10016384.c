/* FUN_10016384 @ 0x10016384 */

void FUN_10016384(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char extraout_r1;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  iVar5 = *DAT_1001644c;
  FUN_100a4a98(param_1 + 0x38,param_2,param_3,0,param_1);
  uVar4 = (uint)*(byte *)(param_1 + 0x39) + param_2;
  cVar3 = (char)uVar4;
  if (0x3b < (uVar4 & 0xff)) goto LAB_100163c8;
  *(char *)(param_1 + 0x39) = cVar3;
  while( true ) {
    FUN_100a474c();
    FUN_100a4c48(param_1 + 0x38,1);
    if (*DAT_1001644c == iVar5) break;
    FUN_1013cdc0();
    cVar3 = extraout_r1;
LAB_100163c8:
    cVar1 = *(char *)(param_1 + 0x3a);
    *(char *)(param_1 + 0x39) = cVar3 + -0x3c;
    if ((byte)(cVar1 + 1U) < 0x18) {
      *(char *)(param_1 + 0x3a) = cVar1 + '\x01';
    }
    else {
      bVar6 = *(char *)(param_1 + 0x3b) + 1;
      *(char *)(param_1 + 0x3a) = cVar1 + -0x17;
      *(byte *)(param_1 + 0x3b) = bVar6;
      iVar2 = FUN_100831e8(*(byte *)(param_1 + 0x3c) - 1,*(ushort *)(param_1 + 0x3e) - 0x76c);
      if (iVar2 < (int)(uint)bVar6) {
        *(undefined1 *)(param_1 + 0x3b) = 1;
        bVar6 = *(char *)(param_1 + 0x3c) + 1;
        if (bVar6 < 0xd) {
          *(byte *)(param_1 + 0x3c) = bVar6;
        }
        else {
          *(undefined1 *)(param_1 + 0x3c) = 1;
          *(short *)(param_1 + 0x3e) = *(short *)(param_1 + 0x3e) + 1;
        }
      }
    }
  }
  FUN_100a5b78((DAT_10016454 - DAT_10016450) * 0x20 & 0xff00U | 0x460031,DAT_1001645c,DAT_10016458);
  return;
}

