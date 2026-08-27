/* FUN_140abc90 @ 0x140abc90 */

undefined4 FUN_140abc90(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  undefined1 auStack_30 [12];
  int local_24;
  
  iVar4 = DAT_140abebc;
  local_24 = *DAT_140abec0;
  FUN_140e5148(*(undefined4 *)(DAT_140abebc + 0xd0),0xffffffff);
  if (*(byte *)(iVar4 + 0x132) == 0) {
    sVar8 = *(short *)(iVar4 + 0x100);
    sVar9 = *(short *)(param_2 + 4);
  }
  else {
    uVar10 = *(byte *)(iVar4 + 0x132) - 1;
    sVar8 = *(short *)(iVar4 + (uVar10 + (uint)((ulonglong)DAT_140abec4 * (ulonglong)uVar10 >> 0x23)
                                         * -0x19 + 0x80) * 2);
    sVar9 = *(short *)(param_2 + 4);
    if (((short)(sVar9 - sVar8) != 1) &&
       ((*(short *)(iVar4 + 0x134) == -1 ||
        ((*(short *)(iVar4 + 0x134) == 0xff && ((short)(sVar9 - sVar8) != 0xff)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x422,DAT_140abecc);
    }
  }
  if (sVar9 == sVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x420,DAT_140abed0);
  }
  bVar1 = *(byte *)(iVar4 + 0x132);
  uVar6 = *(undefined4 *)(iVar4 + 0xd0);
  lVar3 = (ulonglong)DAT_140abec4 * (ulonglong)(uint)bVar1;
  *(short *)(iVar4 + (((uint)bVar1 + (uint)((ulonglong)lVar3 >> 0x23) * -0x19 & 0xff) + 0x80) * 2) =
       sVar9;
  *(byte *)(iVar4 + 0x132) = bVar1 + 1;
  FUN_140e52d8(uVar6,(int)lVar3);
  FUN_140e5148(*(undefined4 *)(iVar4 + 0xd0),0xffffffff);
  *(undefined1 *)(iVar4 + 0xd9) = 1;
  FUN_140e52d8(*(undefined4 *)(iVar4 + 0xd0));
  FUN_140e5148(*(undefined4 *)(iVar4 + 0xd0),0xffffffff);
  cVar2 = *(char *)(iVar4 + 0xd8);
  FUN_140e52d8(*(undefined4 *)(iVar4 + 0xd0));
  puVar5 = DAT_140abed4;
  if (cVar2 == '\x02') {
    uVar10 = *DAT_140abed4;
    *DAT_140abed4 = uVar10 + param_4;
    puVar5[1] = puVar5[1] + (uint)CARRY4(uVar10,param_4);
    FUN_140a9d40(param_2);
    if (*(char *)(iVar4 + 0xa8) != '\0') {
      *(undefined1 *)(iVar4 + 0xa8) = 0;
      (**(code **)(iVar4 + 0x5c))(param_2,param_3,param_4);
    }
    iVar7 = (**(code **)(iVar4 + 0x60))(param_2,param_3,param_4);
    if ((code *)*DAT_140abed8 != (code *)0x0) {
      (*(code *)*DAT_140abed8)(param_1,param_2,param_3,param_4);
    }
    FUN_140aa124(auStack_30);
    if (iVar7 == -8) {
      FUN_1402a6e8(4,2000,DAT_140abee4,DAT_140abee8,DAT_140abee0);
      FUN_1409b044();
    }
    else if (iVar7 == -4) {
      FUN_140a9f8c(*(undefined2 *)(iVar4 + 0x1a));
      (**(code **)(iVar4 + 0x60))(param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x420,DAT_140abedc);
    }
  }
  if ((code *)*DAT_140abec8 != (code *)0x0) {
    (*(code *)*DAT_140abec8)(param_1,param_2,param_3,param_4);
  }
  FUN_140e5148(*(undefined4 *)(iVar4 + 0xd0),0xffffffff);
  *(undefined1 *)(iVar4 + 0xd9) = 0;
  FUN_140e52d8(*(undefined4 *)(iVar4 + 0xd0));
  if (*DAT_140abec0 == local_24) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

