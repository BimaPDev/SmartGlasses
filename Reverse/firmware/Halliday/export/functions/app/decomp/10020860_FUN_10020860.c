/* FUN_10020860 @ 0x10020860 */

undefined4 FUN_10020860(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *DAT_10020ad8;
  if (param_1 == 0) {
    uVar3 = 0;
    while (*DAT_10020ad8 != iVar2) {
      FUN_1013cdc0();
LAB_100208d0:
      uVar3 = 0;
LAB_10020894:
      iVar1 = FUN_1011ea18(param_1,DAT_10020ae8);
      if (((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020afc), iVar1 == 0)) ||
         ((iVar1 = FUN_1011ea18(param_1,DAT_10020b00), iVar1 == 0 ||
          (iVar1 = FUN_1011ea18(param_1,DAT_10020b04), iVar1 == 0)))) {
        uVar3 = 1;
      }
      else {
        iVar1 = FUN_1011ea18(param_1,DAT_10020b08);
        if ((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b0c), iVar1 == 0)) {
          uVar3 = 2;
        }
        else {
          iVar1 = FUN_1011ea18(param_1,DAT_10020b10);
          if ((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b14), iVar1 == 0)) {
            uVar3 = 10;
          }
          else {
            iVar1 = FUN_1011ea18(param_1,DAT_10020b18);
            if ((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b1c), iVar1 == 0)) {
              uVar3 = 4;
            }
            else {
              iVar1 = FUN_1011ea18(param_1,DAT_10020b20);
              if ((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b24), iVar1 == 0)) {
                uVar3 = 6;
              }
              else {
                iVar1 = FUN_1011ea18(param_1,DAT_10020b28);
                if (((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b2c), iVar1 == 0)) ||
                   (iVar1 = FUN_1011ea18(param_1,DAT_10020b30), iVar1 == 0)) {
                  uVar3 = 5;
                }
                else {
                  iVar1 = FUN_1011ea18(param_1,DAT_10020b34);
                  if ((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b38), iVar1 == 0)) {
                    uVar3 = 0x18;
                  }
                  else {
                    iVar1 = FUN_1011ea18(param_1,DAT_10020b3c);
                    if ((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b40), iVar1 == 0)) {
                      uVar3 = 3;
                    }
                    else {
                      iVar1 = FUN_1011ea18(param_1,DAT_10020b44);
                      if ((iVar1 == 0) || (iVar1 = FUN_1011ea18(param_1,DAT_10020b48), iVar1 == 0))
                      {
                        uVar3 = 7;
                      }
                      else {
                        iVar1 = FUN_1011ea18(param_1,DAT_10020b4c);
                        if ((((iVar1 == 0) ||
                             (iVar1 = FUN_1011ea18(param_1,DAT_10020b50), iVar1 == 0)) ||
                            (iVar1 = FUN_1011ea18(param_1,DAT_10020b54), iVar1 == 0)) ||
                           ((iVar1 = FUN_1011ea18(param_1,DAT_10020b58), iVar1 == 0 ||
                            (iVar1 = FUN_1011ea18(param_1,DAT_10020b4c), iVar1 == 0)))) {
                          uVar3 = 8;
                        }
                        else {
                          iVar1 = FUN_1011ea18(param_1,DAT_10020b5c);
                          if ((iVar1 == 0) ||
                             (iVar1 = FUN_1011ea18(param_1,DAT_10020b60), iVar1 == 0)) {
                            uVar3 = 9;
                          }
                          else {
                            iVar1 = FUN_1011ea18(param_1,DAT_10020b64);
                            if (iVar1 == 0) {
                              uVar3 = 0xfe;
                            }
                            else {
                              iVar1 = FUN_1011ea18(param_1,DAT_10020b68);
                              if ((((iVar1 == 0) ||
                                   (iVar1 = FUN_1011ea18(param_1,DAT_10020b6c), iVar1 == 0)) ||
                                  (iVar1 = FUN_1011ea18(param_1,DAT_10020b70), iVar1 == 0)) ||
                                 (iVar1 = FUN_1011ea18(param_1,DAT_10020b74), iVar1 == 0)) {
                                uVar3 = 0x17;
                              }
                              else {
                                iVar1 = FUN_1011ea18(param_1,DAT_10020b78);
                                if (((iVar1 == 0) ||
                                    (iVar1 = FUN_1011ea18(param_1,DAT_10020b7c), iVar1 == 0)) ||
                                   (iVar1 = FUN_1011ea18(param_1,DAT_10020b80), iVar1 == 0)) {
                                  uVar3 = 0xb;
                                }
                                else {
                                  iVar1 = FUN_1011ea18(param_1,DAT_10020b84);
                                  if ((iVar1 == 0) ||
                                     (iVar1 = FUN_1011ea18(param_1,DAT_10020b88), iVar1 == 0)) {
                                    uVar3 = 0xc;
                                  }
                                  else {
                                    iVar1 = FUN_1011ea18(param_1,DAT_10020b8c);
                                    if ((iVar1 == 0) ||
                                       (iVar1 = FUN_1011ea18(param_1,DAT_10020b90), iVar1 == 0)) {
                                      uVar3 = 0xd;
                                    }
                                    else {
                                      iVar1 = FUN_1011ea18(param_1,DAT_10020b94);
                                      if ((iVar1 == 0) ||
                                         (iVar1 = FUN_1011ea18(param_1,DAT_10020c94), iVar1 == 0)) {
                                        uVar3 = 0xe;
                                      }
                                      else {
                                        iVar1 = FUN_1011ea18(param_1,DAT_10020c98);
                                        if ((iVar1 == 0) ||
                                           (iVar1 = FUN_1011ea18(param_1,DAT_10020c9c), iVar1 == 0))
                                        {
                                          uVar3 = 0xf;
                                        }
                                        else {
                                          iVar1 = FUN_1011ea18(param_1,DAT_10020ca0);
                                          if ((iVar1 == 0) ||
                                             (iVar1 = FUN_1011ea18(param_1,DAT_10020ca4), iVar1 == 0
                                             )) {
                                            uVar3 = 0x10;
                                          }
                                          else {
                                            iVar1 = FUN_1011ea18(param_1,DAT_10020ca8);
                                            if ((iVar1 == 0) ||
                                               (iVar1 = FUN_1011ea18(param_1,DAT_10020cac),
                                               iVar1 == 0)) {
                                              uVar3 = 0x11;
                                            }
                                            else {
                                              iVar1 = FUN_1011ea18(param_1,DAT_10020cb0);
                                              if ((iVar1 == 0) ||
                                                 (iVar1 = FUN_1011ea18(param_1,DAT_10020cb4),
                                                 iVar1 == 0)) {
                                                uVar3 = 0x12;
                                              }
                                              else {
                                                iVar1 = FUN_1011ea18(param_1,DAT_10020cb8);
                                                if ((iVar1 == 0) ||
                                                   (iVar1 = FUN_1011ea18(param_1,DAT_10020cbc),
                                                   iVar1 == 0)) {
                                                  uVar3 = 0x13;
                                                }
                                                else {
                                                  iVar1 = FUN_1011ea18(param_1,DAT_10020cc0);
                                                  if ((iVar1 == 0) ||
                                                     (iVar1 = FUN_1011ea18(param_1,DAT_10020cc4),
                                                     iVar1 == 0)) {
                                                    uVar3 = 0x14;
                                                  }
                                                  else {
                                                    iVar1 = FUN_1011ea18(param_1,DAT_10020cc8);
                                                    if ((iVar1 == 0) ||
                                                       (iVar1 = FUN_1011ea18(param_1,DAT_10020ccc),
                                                       iVar1 == 0)) {
                                                      uVar3 = 0x15;
                                                    }
                                                    else {
                                                      iVar1 = FUN_1011ea18(param_1,DAT_10020cd0);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0xfd;
                                                      }
                                                      else {
                                                        iVar1 = FUN_1011ea18(param_1,DAT_10020cd4);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x19;
                                                        }
                                                        else {
                                                          iVar1 = FUN_1011ea18(param_1,DAT_10020cd4)
                                                          ;
                                                          if (iVar1 == 0) {
                                                            uVar3 = 0x19;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_100a5b78((DAT_10020af0 - DAT_10020aec) * 0x20 & 0xff00U | 0xe90032,DAT_10020af8,
                   DAT_10020af4,uVar3,param_1);
    }
    return uVar3;
  }
  iVar1 = FUN_1011ea18(param_1,DAT_10020adc,param_3,0);
  if (((iVar1 != 0) && (iVar1 = FUN_1011ea18(param_1,DAT_10020ae0), iVar1 != 0)) &&
     (iVar1 = FUN_1011ea18(param_1,DAT_10020ae4), iVar1 != 0)) goto LAB_100208d0;
  uVar3 = 0x16;
  goto LAB_10020894;
}

