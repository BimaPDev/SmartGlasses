/* FUN_100b243c @ 0x100b243c */

undefined4 FUN_100b243c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = ((int)PTR_DAT_100b24f4 - (int)PTR_DAT_100b24f0) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0x2800031,PTR_s___handle__p___1017f2f8_1_100b24f8,param_1);
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar3 = 0xffffffe0;
  }
  else {
    *(undefined1 *)(param_1 + 0x62) = 1;
    iVar1 = FUN_1012e06e(0x27,3);
    *(int *)(param_1 + 0x90) = iVar1;
    uVar2 = DAT_100b2500;
    puVar4 = PTR_s_malloc_thread_stack_failed_100b24fc;
    if (iVar1 != 0) {
      FUN_1013c856(param_1 + 0xac);
      FUN_1013ca1a(param_1 + 0x94,0,1);
      *(undefined1 *)(param_1 + 0xc0) = 0;
      uVar6 = *(undefined4 *)(param_1 + 0x90);
      uVar3 = FUN_1012e0a2(0x27,3);
      uVar3 = FUN_1011db7e(uVar6,uVar3,PTR_LAB_10130504_1_100b2504,param_1,0,0,1,0,0);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      FUN_10113564(uVar3,PTR_s_parser_100b2508);
      iVar1 = FUN_1011dbde(param_1 + 0x94,2000);
      uVar2 = DAT_100b2510;
      puVar4 = PTR_s_thread_create_timeout_100b250c;
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = 0;
    FUN_100a5b78(uVar2 | uVar5,puVar4);
  }
  return uVar3;
}

