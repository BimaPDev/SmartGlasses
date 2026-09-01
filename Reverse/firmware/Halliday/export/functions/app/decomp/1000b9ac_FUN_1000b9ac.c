/* FUN_1000b9ac @ 0x1000b9ac */

void FUN_1000b9ac(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_r7;
  uint uVar6;
  
  iVar4 = *DAT_1000ba10;
  uVar6 = param_3;
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_1000b9e4;
  }
  do {
    uVar5 = (uint)*(ushort *)(param_1 + 0xc);
    if (uVar6 <= *(ushort *)(param_1 + 0xc)) {
      uVar5 = uVar6;
    }
    uVar3 = 0;
    if (*(char *)(param_1 + 3) == '\0') goto LAB_1000b9f2;
    uVar1 = (**(code **)(param_1 + 0x10))(param_2,uVar5,*(undefined2 *)(param_1 + 8));
    if (uVar1 == uVar5) goto LAB_1000b9fe;
    do {
      do {
        iVar2 = param_3 - uVar6;
        unaff_r7 = uVar6;
LAB_1000b9e4:
        if (*DAT_1000ba10 == iVar4) {
          return;
        }
        FUN_1013cdc0(iVar2);
        uVar3 = extraout_r1;
        uVar6 = unaff_r7;
LAB_1000b9f2:
        uVar1 = FUN_1000b8f4(param_1,uVar3,param_2);
      } while ((int)uVar1 < 0);
LAB_1000b9fe:
      uVar6 = uVar6 - uVar1;
      param_2 = param_2 + uVar1;
    } while (uVar6 == 0);
  } while( true );
}

