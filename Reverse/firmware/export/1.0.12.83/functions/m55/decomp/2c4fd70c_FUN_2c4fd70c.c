/* FUN_2c4fd70c @ 0x2c4fd70c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fd70c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  func_0x2c5e3318();
  iVar2 = FUN_2c602de4();
  if (iVar2 == 0) {
    FUN_2c602d28();
    func_0x2c602dd8();
  }
  func_0x2c5e2e64();
  uVar1 = _LAB_2c4fd8a0;
  func_0x2c5e8bc0();
  func_0x2c52421c();
  FUN_2c5d78f0();
  func_0x2c5d7d7c();
  FUN_2c62a470();
  uVar3 = FUN_2c5fee44();
  FUN_2c603a04(uVar3,0,_DAT_2c4fd8a4);
  FUN_2c62a470();
  uVar4 = FUN_2c5fee44();
  FUN_2c606d6c(uVar4,0xff,0);
  FUN_2c62a470();
  uVar4 = FUN_2c5fee44();
  FUN_2c606d60(uVar4,0xff000000,0);
  iVar2 = _LAB_2c4fd8a8;
  FUN_2c606abc(uVar3,0x10);
  uVar3 = FUN_2c62a470();
  func_0x2c5feeb8(uVar3,0xff000000);
  lv_style_init_or_reset(uVar1);
  FUN_2c62a470();
  uVar3 = FUN_2c62a47c();
  lv_obj_set_style_width(uVar1,uVar3);
  FUN_2c62a470();
  uVar3 = FUN_2c62a4a0();
  lv_obj_set_style_height(uVar1,uVar3);
  lv_obj_set_style_bg_opa(uVar1,0xff);
  lv_obj_set_style_bg_color(uVar1,0xff000000);
  uVar4 = _LAB_2c4fd8b0;
  uVar3 = _LAB_2c4fd8ac;
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  func_0x2c5ddb7c(iVar2,uVar4,uVar3);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8b8,_LAB_2c4fd8b4);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8c0,_LAB_2c4fd8bc);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8c8,_LAB_2c4fd8c4);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8d0,_LAB_2c4fd8cc);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8d8,_LAB_2c4fd8d4);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8e0,_LAB_2c4fd8dc);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8e8,_LAB_2c4fd8e4);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8f0,_LAB_2c4fd8ec);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd8f8,_LAB_2c4fd8f4);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd900,_LAB_2c4fd8fc);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd908,_LAB_2c4fd904);
  func_0x2c5ddb7c(iVar2,_LAB_2c4fd910,_LAB_2c4fd90c);
  FUN_2c5dfda8(iVar2,0xb,500,_LAB_2c4fd914);
  FUN_2c525874();
  func_0x2c5258c8();
  func_0x2c5df7b8(iVar2,_LAB_2c4fd8b4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

