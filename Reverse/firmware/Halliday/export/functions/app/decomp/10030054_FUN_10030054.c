/* FUN_10030054 @ 0x10030054 */

void FUN_10030054(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte *unaff_r4;
  int unaff_r5;
  int iVar2;
  int iVar3;
  int unaff_r7;
  
  iVar1 = *DAT_100300cc;
  iVar3 = *(int *)(DAT_100300d0 + 0xe8);
  if (iVar3 == 0) goto LAB_100300a8;
  unaff_r4 = (byte *)0x14ca;
  iVar2 = iVar3 + 0xa2;
  FUN_1011ea48(iVar2,0,0x204,DAT_100300d0,param_1,iVar1,param_3);
  unaff_r5 = iVar2;
  if (*(char *)(iVar3 + 0x14ca) == '\0') goto LAB_100300a8;
  unaff_r5 = 0;
  unaff_r4 = (byte *)(iVar3 + 0x14ca);
  do {
    unaff_r7 = iVar2 + 0x204;
    if ((int)(*unaff_r4 - 1) <= unaff_r5) {
      FUN_1011ea48((*unaff_r4 - 1) * 0x204 + iVar3 + 0xa2,0);
      *unaff_r4 = *unaff_r4 - 1;
LAB_100300a8:
      if (*DAT_100300cc == iVar1) {
        return;
      }
      iVar2 = FUN_1013cdc0();
    }
    FUN_1011ea40(iVar2,unaff_r7,0x204);
    unaff_r5 = unaff_r5 + 1;
    iVar2 = unaff_r7;
  } while( true );
}

