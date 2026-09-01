/* FUN_1005777c @ 0x1005777c */

void FUN_1005777c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int local_14 [2];
  
  uVar4 = *(uint *)(param_1 + 0xa0);
  iVar1 = FUN_1013c736(param_1,local_14);
  if (iVar1 == 0) {
    puVar2 = (undefined *)FUN_1013c71a(param_1,0);
    puVar3 = PTR_DAT_100577cc;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
    }
    FUN_10119dc2(PTR_s__p___10s__real_size__u___unused___100577d0,param_1,puVar3,uVar4,local_14[0],
                 uVar4 - local_14[0],uVar4,((uVar4 - local_14[0]) * 100) / uVar4);
  }
  else {
    FUN_10119dc2(PTR_s_Unable_to_determine_unused_stack_100577c8);
  }
  return;
}

