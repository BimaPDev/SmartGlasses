/* FUN_100d40e4 @ 0x100d40e4 */

void FUN_100d40e4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60;
  undefined1 auStack_5c [20];
  undefined4 local_48;
  undefined2 local_44;
  byte abStack_42 [38];
  
  uVar3 = (DAT_100d41ec - DAT_100d41e8) * 0x20 & 0xff00;
  if (param_1 == (undefined4 *)0x0) {
    FUN_100a5b78(uVar3 | 0x400011,DAT_100d41f4,DAT_100d41f0);
  }
  else {
    FUN_100d3a3c(param_1,auStack_5c);
    FUN_1011ea48(&local_48,0,0x18);
    FUN_100d6c3c(&local_48,3);
    iVar4 = 0;
    do {
      if (((int)((uint)abStack_42[iVar4 * 8] << 0x1f) < 0) &&
         (iVar1 = FUN_1011ea30(&local_48 + iVar4 * 2,param_1,6), iVar1 == 0)) {
        if ((abStack_42[iVar4 * 8] & 0xe) != 0) {
          uVar5 = 1;
          goto LAB_100d417e;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
    local_68 = *param_1;
    local_64 = *(undefined2 *)(param_1 + 1);
    local_62 = FUN_1011ea10(param_2);
    local_60 = param_2;
    iVar4 = FUN_100d4038(6,&local_68);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = 1;
    }
LAB_100d417e:
    FUN_100a5b78(uVar3 | 0x460033,DAT_100d41f4,DAT_100d41f8,param_2,auStack_5c,uVar5);
    FUN_1011ea48(&local_44,0,0x23);
    local_48 = *param_1;
    local_44 = *(undefined2 *)(param_1 + 1);
    uVar3 = FUN_1011ea10(param_2);
    if (uVar3 < 0x21) {
      uVar2 = FUN_1011ea10(param_2);
    }
    else {
      uVar2 = 0x20;
    }
    FUN_1013d03e(abStack_42,param_2,uVar2,0x21);
    FUN_100d44e4(0xc9,0x10,&local_48,0x27,uVar5);
  }
  return;
}

