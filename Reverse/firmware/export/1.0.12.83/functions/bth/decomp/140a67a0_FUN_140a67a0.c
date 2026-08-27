/* FUN_140a67a0 @ 0x140a67a0 */

void FUN_140a67a0(void)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_140a68a8;
  FUN_1402a6e8(4,0x395,DAT_140a68b0,DAT_140a68ac,DAT_140a68a0,DAT_140a68a4);
  FUN_140b490c();
  FUN_14028e48(3);
  FUN_140b337c(0);
  FUN_140b337c(1);
  piVar1 = DAT_140a68b4;
  FUN_140adf04(0x1d);
  thunk_FUN_14049f78();
  FUN_140e5718();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    iVar4 = FUN_140e52f8(DAT_140a68bc,1,0);
    *piVar1 = iVar4;
    if (iVar4 == 0) goto LAB_140a67f8;
  }
  FUN_140e5378(iVar4,1000);
LAB_140a67f8:
  *DAT_140a68b8 = 2;
  FUN_140a7648();
  FUN_1402fc00(0);
  FUN_140bd188();
  FUN_140315d4();
  thunk_FUN_140341fc();
  FUN_14034598(0);
  FUN_14032660();
  FUN_14038878(0);
  FUN_14038ae0();
  FUN_14032390();
  FUN_14038898();
  local_1c = FUN_14039098();
  local_18 = FUN_140390b4();
  local_14 = FUN_140390bc();
  local_10 = FUN_140390bc();
  FUN_140a1958(&local_1c);
  uVar2 = local_14;
  cVar3 = FUN_140dd3a4(local_14);
  FUN_140323b0(uVar2,cVar3 + '\x01',local_1c);
  thunk_FUN_14031648();
  FUN_140a66dc();
  FUN_14031630();
  FUN_14036780();
  if (*DAT_140a68a8 != local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

