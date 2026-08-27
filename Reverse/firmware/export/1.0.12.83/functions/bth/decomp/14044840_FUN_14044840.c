/* FUN_14044840 @ 0x14044840 */

void FUN_14044840(uint param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  iVar5 = DAT_140448b8;
  if (3 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140448cc,DAT_140448bc,param_1);
  }
  cVar1 = *(char *)(*(int *)(DAT_140448b8 + 0xe3e) + param_1 + 0xc);
  uVar4 = FUN_1404602c();
  FUN_1402a6e8(4,0x53c,DAT_140448c8,DAT_140448c4,DAT_140448c0,DAT_140448bc,param_1,cVar1,uVar4,
               param_2);
  iVar5 = param_1 + iVar5;
  cVar2 = (char)param_2;
  *(char *)(iVar5 + 0x6c) = cVar2;
  if ((cVar1 != -1) && (*(char *)(iVar5 + 0x88) != param_2)) {
    *(char *)(iVar5 + 0x88) = cVar2;
    FUN_1402a6e8(4,0x3c4,DAT_140360e0,DAT_140360dc,DAT_140360d8,cVar1,uVar4,param_2,unaff_r4,
                 unaff_r5,unaff_r6,unaff_lr);
    if (uVar4 < 8) {
      if (param_2 < -3) {
        param_2 = (int)(char)(cVar2 + '\x12');
        FUN_14035668(1,3,2,cVar1);
      }
      else {
        FUN_14035668(0,3,2,cVar1);
      }
      uVar3 = FUN_14035a88(param_2);
      FUN_1402e37c(uVar4 + 0x13c | 0x2000,uVar3);
      return;
    }
    return;
  }
  return;
}

