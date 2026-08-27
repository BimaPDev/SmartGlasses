/* FUN_2c5d3990 @ 0x2c5d3990 */

void FUN_2c5d3990(int param_1,int param_2,char *param_3,char *param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    if (param_2 == 0) {
      lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x30),1);
      return;
    }
    if ((((param_3 != (char *)0x0) && (*param_3 != '\0')) && (param_4 != (char *)0x0)) &&
       (*param_4 != '\0')) {
      iVar1 = FUN_2c5e33e4();
      if (iVar1 == 1) {
        FUN_2c607048(*(undefined4 *)(param_1 + 0x30),0x144,0x6e);
        FUN_2c607048(*(undefined4 *)(param_1 + 0x38),0xf0,0x38);
      }
      else {
        FUN_2c607048(*(undefined4 *)(param_1 + 0x30),0x144,0x82);
        FUN_2c607048(*(undefined4 *)(param_1 + 0x38),0xf0,0x4c);
      }
      FUN_2c5d3494(param_1,*(undefined4 *)(param_1 + 0x30));
      FUN_2c638730(*(undefined4 *)(param_1 + 0x34),param_3);
      FUN_2c638730(*(undefined4 *)(param_1 + 0x38),param_4);
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x30),1);
      return;
    }
  }
  return;
}

