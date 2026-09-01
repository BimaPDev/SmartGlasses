/* FUN_10027c74 @ 0x10027c74 */

void FUN_10027c74(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  int local_5c;
  undefined1 auStack_58 [60];
  int local_1c;
  
  piVar1 = DAT_10027d54;
  local_1c = *(int *)PTR_DAT_10027d48;
  uVar7 = ((int)PTR_DAT_10027d4c - (int)PTR_DAT_10027d50) * 0x20 & 0xff00;
  piVar8 = param_1;
  if (*DAT_10027d54 != 0) goto LAB_10027cb4;
  uVar2 = uVar7 | 0xf10000;
  puVar6 = PTR_s_new_records_data_is_NULL__10027d58;
  do {
    FUN_100a5b78(uVar2 | 0x11,PTR_s__btcall_records_set_phone_number_10027d5c,puVar6);
    while( true ) {
      if (*(int *)PTR_DAT_10027d48 == local_1c) {
        return;
      }
      param_1 = (int *)FUN_1013cdc0();
LAB_10027cb4:
      if ((param_1 == (int *)0x0) || (iVar3 = FUN_1011ea10(), iVar3 == 0)) break;
      iVar3 = *piVar1;
      FUN_1011e9f8(iVar3 + 5,piVar8,0x17);
      *(undefined1 *)(iVar3 + 0x1c) = 0;
      piVar4 = (int *)FUN_100bcb60();
      if (((piVar4 == (int *)0x0) || (iVar3 = FUN_1011ea10(), iVar3 == 0)) &&
         (iVar3 = FUN_1011ea10(DAT_10027d64), piVar4 = DAT_10027d64, iVar3 == 0)) {
        local_5c = iVar3;
        FUN_1011ea48(auStack_58,0,0x39);
        iVar3 = FUN_1001bdb8(piVar8,&local_5c);
        piVar4 = &local_5c;
        if (iVar3 == 0) {
          piVar4 = piVar8;
        }
      }
      piVar8 = (int *)*piVar1;
      uVar5 = FUN_1011e9f8((int)piVar8 + 0x1d,piVar4,0x3c);
      *(undefined1 *)((int)piVar8 + 0x59) = 0;
      FUN_100a5b78(uVar7 | 0x1140032,PTR_s__btcall_records_set_phone_number_10027d5c,DAT_10027d68,
                   (int)piVar8 + 5,uVar5);
      FUN_100434c0(*piVar1);
    }
    uVar2 = uVar7 | 0xf60000;
    puVar6 = PTR_s_phone_number_is_NULL_or_empty__10027d60;
  } while( true );
}

