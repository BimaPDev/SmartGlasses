/* FUN_10043988 @ 0x10043988 */

/* WARNING: Removing unreachable block (ram,0x10138bcc) */

uint FUN_10043988(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  iVar2 = DAT_10043a6c;
  local_1c = *DAT_10043a68;
  uVar1 = (**(code **)(DAT_10043a6c + 8))();
  uVar4 = (DAT_10043a70 - DAT_10043a74) * 0x20 & 0xff00;
  FUN_100a5b78(uVar4 | 0xc70032,DAT_10043a7c,DAT_10043a78,param_1,uVar1);
  iVar2 = (**(code **)(iVar2 + 8))();
  if (iVar2 == 0x6f) {
    FUN_10043880(param_1);
  }
  iVar2 = FUN_1004b7d8();
  if (iVar2 == 0) {
    uVar3 = FUN_1004392c(param_1);
    if (uVar3 == 0) goto LAB_100439dc;
LAB_100439e4:
    if (*DAT_10043a68 == local_1c) {
      return uVar3;
    }
  }
  else {
    uVar3 = FUN_1004b420(param_1);
    if (uVar3 == 0) {
      uVar3 = FUN_100a5b78(uVar4 | 0xd30032,DAT_10043a7c,DAT_10043a80,uVar1,param_1);
      goto LAB_100439e4;
    }
LAB_100439dc:
    if ((param_1 - 0x82U < 2) || (param_1 == 0x85)) goto LAB_100439e4;
    FUN_100a5b78(uVar4 | 0xe60032,DAT_10043a7c,DAT_10043a84,uVar1,param_1);
    uVar3 = FUN_100437bc(param_1);
    if (uVar3 != 0) goto LAB_100439e4;
    FUN_100a5b78(uVar4 | 0xe90032,DAT_10043a7c,DAT_10043a88,uVar1,param_1);
    if (*DAT_10043a68 == local_1c) goto LAB_1004378c;
  }
  FUN_1013cdc0();
LAB_1004378c:
  if (*DAT_100437b8 != *DAT_100437b8) {
    uVar1 = FUN_1013cdc0();
  }
  local_1c = CONCAT13(0x82,CONCAT12(9,(short)uVar1));
  uStack_18 = 0;
  uStack_16 = 0;
  uVar4 = FUN_1009ece8(DAT_100e7d68,&local_1c);
  return (uVar4 ^ 1) & 0xff;
}

